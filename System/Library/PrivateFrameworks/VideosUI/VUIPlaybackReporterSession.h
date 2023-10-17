//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface VUIPlaybackReporterSession : NSObject
{
    NSMutableDictionary *_metadata;	// 8 = 0x8
    struct os_unfair_lock_s _metadataLock;	// 16 = 0x10
    _Bool _reportingEnabled;	// 20 = 0x14
    NSObject<TVPPlayback> *_player;	// 24 = 0x18
    NSString *_UUID;	// 32 = 0x20
    id _context;	// 40 = 0x28
}

+ (id)transitionReasonForMediaControllerStopReason:(id)arg1 autoStop:(id)arg2;	// IMP=0x006000000007f2fc
+ (id)transitionReasonForMediaControllerStartReason:(id)arg1 autoStart:(id)arg2;	// IMP=0x006000000007f0fd
+ (id)transitionTypeForMediaControllerAutoTransition:(id)arg1;	// IMP=0x006000000007f058
- (void).cxx_destruct;	// IMP=0x00000000002f769e
@property(nonatomic) _Bool reportingEnabled; // @synthesize reportingEnabled=_reportingEnabled;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak NSObject<TVPPlayback> *player; // @synthesize player=_player;
- (id)consumeMetadataForKey:(id)arg1;	// IMP=0x00000000002f75bc
- (void)setMetadata:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002f752c
- (id)metadataForKey:(id)arg1;	// IMP=0x00000000002f74c5
- (id)description;	// IMP=0x00000000002f73e9
- (id)initWithPlayer:(id)arg1 context:(id)arg2;	// IMP=0x00000000002f7264
- (id)consumeStartReason;	// IMP=0x000000000007f004
- (id)consumeStartType;	// IMP=0x000000000007efb0
- (id)consumeStopReason;	// IMP=0x000000000007ef5c
- (id)consumeStopType;	// IMP=0x000000000007ef08

@end
