//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class VCRateControlMediaController;

@protocol VCRateControlAlgorithm <NSObject>
@property(nonatomic) _Bool isFirstTimestampArrived;
@property(readonly, nonatomic) _Bool isLossBasedAdaptationOn;
@property(nonatomic) unsigned int rateSharingCount;
@property(readonly, nonatomic) _Bool isFirstInitialRampUpDone;
@property(readonly, nonatomic) _Bool isSendBitrateLimited;
@property(nonatomic) _Bool didMBLRampDown;
@property(readonly, nonatomic) unsigned int actualBitrate;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) unsigned int remoteBandwidthEstimation;
@property(nonatomic) unsigned int localBandwidthEstimation;
@property(readonly, nonatomic) _Bool isNewRateSentOut;
@property(readonly, nonatomic) double owrd;
@property(readonly, nonatomic) unsigned int worstRecentBurstLoss;
@property(readonly, nonatomic) double worstRecentRoundTripTime;
@property(readonly, nonatomic) double roundTripTime;
@property(readonly, nonatomic) unsigned int totalPacketReceived;
@property(readonly, nonatomic) double packetLossRateVideo;
@property(readonly, nonatomic) double packetLossRateAudio;
@property(readonly, nonatomic) double packetLossRate;
@property(readonly, nonatomic) unsigned int mostBurstLoss;
@property(readonly, nonatomic) _Bool isCongested;
@property(readonly, nonatomic) unsigned int rateChangeCounter;
@property(readonly, nonatomic) unsigned int targetBitrate;
@property(readonly, nonatomic) struct tagVCRateControlAlgorithmConfig config;
@property(retain, nonatomic) VCRateControlMediaController *mediaController;
- (void)enableBasebandDump:(void *)arg1;
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(_Bool)arg2;
- (_Bool)doRateControlWithStatistics:(struct tagVCStatisticsMessage)arg1;
- (void)configure:(struct tagVCRateControlAlgorithmConfig)arg1 restartRequired:(_Bool)arg2;
@end

