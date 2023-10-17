//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/RETrainingContext.h>

@protocol REComplimentaryApplicationProvider;

@interface REDDonatedActionsApplicationTrainingContext : RETrainingContext
{
    id <REComplimentaryApplicationProvider> _provider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000001a24
- (_Bool)_wantsAutomaticRemoteContextForwarding;	// IMP=0x0010000000001a1c
- (void)setAttribute:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000196a
- (void)trainWithElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;	// IMP=0x00100000000017bb
- (id)initWithProvider:(id)arg1;	// IMP=0x001000000000174d

@end
