//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GQDRGradient : NSObject
{
    struct __CFArray *mStops;	// 8 = 0x8
    int mType;	// 16 = 0x10
    float mOpacity;	// 20 = 0x14
    float mAngle;	// 24 = 0x18
    struct CGPoint mStart;	// 32 = 0x20
    struct CGPoint mEnd;	// 48 = 0x30
}

+ (const struct StateSpec *)stateForReading;	// IMP=0x001000000000c686
- (struct CGPoint)end;	// IMP=0x000000000000c70b
- (struct CGPoint)start;	// IMP=0x000000000000c6fb
- (float)angle;	// IMP=0x000000000000c6f0
- (float)opacity;	// IMP=0x000000000000c6e5
- (int)type;	// IMP=0x000000000000c6dc
- (struct __CFArray *)stops;	// IMP=0x000000000000c6d2
- (void)dealloc;	// IMP=0x000000000000c693
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x000000000000c71b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

