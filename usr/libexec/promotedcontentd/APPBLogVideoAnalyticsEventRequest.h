//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class APPBLogMetaData, NSString;

@interface APPBLogVideoAnalyticsEventRequest : PBRequest
{
    double _currentPlaybackTime;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    double _totalDuration;	// 24 = 0x18
    double _visiblePercentage;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    int _eventSequence;	// 48 = 0x30
    APPBLogMetaData *_metaData;	// 56 = 0x38
    int _videoState;	// 64 = 0x40
    float _volume;	// 68 = 0x44
    struct {
        unsigned int currentPlaybackTime:1;
        unsigned int timestamp:1;
        unsigned int totalDuration:1;
        unsigned int visiblePercentage:1;
        unsigned int eventSequence:1;
        unsigned int videoState:1;
        unsigned int volume:1;
    } _has;	// 72 = 0x48
}

+ (id)options;	// IMP=0x002000000005a35c
- (void).cxx_destruct;	// IMP=0x002000000005bf39
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) int eventSequence; // @synthesize eventSequence=_eventSequence;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double visiblePercentage; // @synthesize visiblePercentage=_visiblePercentage;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) APPBLogMetaData *metaData; // @synthesize metaData=_metaData;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000005bd30
- (unsigned long long)hash;	// IMP=0x001000000005b7d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005b5c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000005b450
- (void)copyTo:(id)arg1;	// IMP=0x001000000005b315
- (void)writeTo:(id)arg1;	// IMP=0x001000000005b1c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000005b1b8
- (id)dictionaryRepresentation;	// IMP=0x001000000005a957
- (id)description;	// IMP=0x001000000005a8a8
@property(nonatomic) _Bool hasVolume;
@property(nonatomic) _Bool hasEventSequence;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasVisiblePercentage;
@property(nonatomic) _Bool hasTotalDuration;
@property(nonatomic) _Bool hasCurrentPlaybackTime;
- (int)StringAsVideoState:(id)arg1;	// IMP=0x001000000005a489
- (id)videoStateAsString:(int)arg1;	// IMP=0x001000000005a440
@property(nonatomic) _Bool hasVideoState;
@property(nonatomic) int videoState; // @synthesize videoState=_videoState;
@property(readonly, nonatomic) _Bool hasBundleID;
@property(readonly, nonatomic) _Bool hasMetaData;

@end
