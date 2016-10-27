# CMSLaserValidation

see https://twiki.cern.ch/twiki/bin/view/CMS/EGammaHLT2012LaserCorrValHowto for instructions


scripts for doing HLT Laser Corrections Validation

--------------Adding HLT Laser Corrections
In your hlt.py config, add the following lines:
process.GlobalTag.toGet.append(
      cms.PSet(
          record  = cms.string( 'EcalLaserAPDPNRatiosRcd' ),
          tag     = cms.string( 'EcalLaserAPDPNRatios_weekly_v1_hlt' ),
          connect = cms.untracked.string( 'frontier://FrontierPrep/CMS_COND_ECAL' )
      )
  )

and in the EcalUnpackerWorkerESProducer ESProducer change

laserCorrection = cms.bool( False ),
to
laserCorrection = cms.bool( True ),

I recommend turning off all PoolOutputModule processes except for hltOutputA, and removing any trigger paths from hltOuputA that you don't care about.

--------------Reconstruction + DQM

In whatever 5_2_x release you already have from the hlt step check out the DQMOffline/Trigger package:

cvs co -r LaserValidation DQMOffline/Trigger
scram b -j 4

Create a RECO+DQM config with the following command:

cmsDriver.py step2_A -s RAW2DIGI,L1Reco,RECO,DQM:triggerOfflineDQMSource \
-n 5 --eventcontent DQM --datatier DQM \
--conditions GR_R_52_V7::All \
--magField AutoFromDBCurrent --filein file:outputA.root \
--data --processName "ReReco" \
--hltProcess "TEST" \
--no_exec

--------------Harvesting

Create a Harvesting config with the following command:

cmsDriver.py step3 -s HARVESTING:hltOfflineDQMClient\
--harvesting AtJobEnd \
--conditions GR_R_52_V7::All \
--filein file:step2_A_RAW2DIGI_L1Reco_RECO_DQM.root \
--data \
--no_exec \
--hltProcess "TEST"
