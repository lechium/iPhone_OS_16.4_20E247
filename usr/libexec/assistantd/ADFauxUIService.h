//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface ADFauxUIService
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000223a51
- (void)_unhandledCommand:(id)arg1 error:(id)arg2 forDomain:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002239be
- (void)_unhandledCommand:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002239a4
- (void)_appPunchOutHandler:(id)arg1 forDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000223992
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000223417
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x001000000022340f
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000223388
- (id)domains;	// IMP=0x001000000022331e
- (id)handle;	// IMP=0x0010000000223315
- (id)init;	// IMP=0x0010000000223251

@end

