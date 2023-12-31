//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRUSpatialAudioPreferences : NSObject
{
    _Bool _isHeadTrackingEnabled;	// 8 = 0x8
    int _mode;	// 12 = 0xc
}

@property(readonly, nonatomic) _Bool isHeadTrackingEnabled; // @synthesize isHeadTrackingEnabled=_isHeadTrackingEnabled;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
- (id)descriptionForSpatialMode:(int)arg1;	// IMP=0x00000000000b7cc1
- (id)description;	// IMP=0x00000000000b7c23
- (id)initWithMode:(int)arg1 headTrackingEnabled:(_Bool)arg2;	// IMP=0x00000000000b7bdd

@end

