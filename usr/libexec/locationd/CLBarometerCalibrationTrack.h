//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLBarometerCalibrationTrack : NSObject
{
    double _fStartTime;	// 8 = 0x8
    double _fEndTime;	// 16 = 0x10
    unsigned long long _fType;	// 24 = 0x18
    unsigned long long _fNotification;	// 32 = 0x20
    double _fLocationHorizontalUncertainty;	// 40 = 0x28
    struct CLLocationCoordinate2D _fLocationCoordinates;	// 48 = 0x30
}

@property(nonatomic) double fLocationHorizontalUncertainty; // @synthesize fLocationHorizontalUncertainty=_fLocationHorizontalUncertainty;
@property(nonatomic) struct CLLocationCoordinate2D fLocationCoordinates; // @synthesize fLocationCoordinates=_fLocationCoordinates;
@property(nonatomic) unsigned long long fNotification; // @synthesize fNotification=_fNotification;
@property(nonatomic) unsigned long long fType; // @synthesize fType=_fType;
@property(nonatomic) double fEndTime; // @synthesize fEndTime=_fEndTime;
@property(nonatomic) double fStartTime; // @synthesize fStartTime=_fStartTime;
- (id)description;	// IMP=0x00100000007b76f0
- (id)initWithContextType:(unsigned long long)arg1 forNotification:(unsigned long long)arg2 startTime:(double)arg3;	// IMP=0x00100000007b768b

@end

