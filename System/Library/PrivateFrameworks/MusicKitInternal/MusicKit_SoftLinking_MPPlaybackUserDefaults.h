//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPPlaybackUserDefaults;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPPlaybackUserDefaults : NSObject
{
    MPPlaybackUserDefaults *_underlyingPlaybackUserDefaults;	// 8 = 0x8
}

+ (id)preferredResolutionsDidChangeNotification;	// IMP=0x004000000000bda8
+ (id)standardUserDefaults;	// IMP=0x004000000000b9c7
- (void).cxx_destruct;	// IMP=0x000000000000be58
- (void)_handlePreferredResolutionsDidChangeNotification:(id)arg1;	// IMP=0x000000000000bdb5
@property(readonly, nonatomic) long long preferredVideoLowBandwidthResolution;
@property(readonly, nonatomic) long long preferredMusicLowBandwidthResolution;
- (void)dealloc;	// IMP=0x000000000000bc7d
- (id)_initWithUnderlyingPlaybackUserDefaults:(id)arg1;	// IMP=0x000000000000bb00

@end
