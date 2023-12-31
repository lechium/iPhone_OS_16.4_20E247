//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRecents/CRRecentContactsLibrary.h>

@class CRDClient, NSString, _CRRecentsLibrary;

@interface CRDRecentContactsLibrary : CRRecentContactsLibrary
{
    CRDClient *_client;	// 8 = 0x8
    _CRRecentsLibrary *_library;	// 16 = 0x10
}

+ (id)os_log;	// IMP=0x0020000000011fd0
- (void).cxx_destruct;	// IMP=0x0020000000012565
- (void)removeAllRecentContactsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012548
- (void)removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 domain:(id)arg3;	// IMP=0x0010000000012525
- (void)recordContactEvents:(id)arg1 domain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000124b2
- (void)searchRecentsUsingQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000120e9
- (id)_remoteLibraryWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000120e0
- (void)start;	// IMP=0x00100000000120da
- (id)initWithClient:(id)arg1;	// IMP=0x001000000001202c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

