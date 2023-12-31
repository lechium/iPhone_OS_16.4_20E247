//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDSessionActiveParticipantsCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_cachedTokensBySessionID;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000059b970
- (void).cxx_destruct;	// IMP=0x002000000059c3b0
@property(retain, nonatomic) NSMutableDictionary *cachedTokensBySessionID; // @synthesize cachedTokensBySessionID=_cachedTokensBySessionID;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (id)vendTokenListForSessionID:(id)arg1;	// IMP=0x001000000059c2a0
- (id)participantsForSessionID:(id)arg1;	// IMP=0x001000000059c0f0
- (void)removeParticipantsForSessionID:(id)arg1;	// IMP=0x001000000059bf00
- (void)updateParticipants:(id)arg1 forSessionID:(id)arg2;	// IMP=0x001000000059bac0
- (id)init;	// IMP=0x001000000059ba30

@end

