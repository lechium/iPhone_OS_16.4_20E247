//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SPCompanionAppServerProtocolStub : NSObject
{
}

- (void)replyTimingData:(id)arg1;	// IMP=0x0020000000009477
- (void)layoutDirection:(long long)arg1;	// IMP=0x0010000000009471
- (void)preferredContentSizeCategory:(id)arg1;	// IMP=0x001000000000946b
- (void)dataInterfaceWillResignActive:(id)arg1;	// IMP=0x0010000000009465
- (void)dataInterfaceDidBecomeActive:(id)arg1;	// IMP=0x001000000000945f
- (void)applicationDidReceiveNotification:(id)arg1 clientIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009459
- (void)applicationHandleWatchTaskKeys:(id)arg1 reasonForSnapshot:(unsigned long long)arg2 visibleVCID:(id)arg3 barTaskUUID:(id)arg4 clientIdentifier:(id)arg5;	// IMP=0x0010000000009453
- (MISSING_TYPE *)applicationIsStillActive;	// IMP=0x001000000000944d
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x0010000000009447
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x0010000000009441
- (void)applicationDidFinishConnecting:(id)arg1;	// IMP=0x001000000000943b
- (void)applicationContentsDidReset:(id)arg1;	// IMP=0x0010000000009435
- (void)applicationDidTerminate:(id)arg1;	// IMP=0x001000000000942f
- (void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;	// IMP=0x0010000000009429
- (void)receiveData:(id)arg1 fromIdentifier:(id)arg2;	// IMP=0x0010000000009423

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

