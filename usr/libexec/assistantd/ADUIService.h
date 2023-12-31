//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ADCommandExecutionContext, NSObject;
@protocol ADCommandCenterRequestDelegate, ADUIServiceDelegate, OS_dispatch_queue;

@interface ADUIService
{
    id <ADCommandCenterRequestDelegate> _requestDelegate;	// 8 = 0x8
    id <ADUIServiceDelegate> _delegate;	// 16 = 0x10
    ADCommandExecutionContext *_lastHandledContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)serviceIdentifierForRequestDelegate:(id)arg1;	// IMP=0x00400000001e8bf7
- (void).cxx_destruct;	// IMP=0x00200000001e9e4d
- (void)setDelegate:(id)arg1;	// IMP=0x00100000001e9e39
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001e94df
- (void)_wakeSystemForHandlingCommand;	// IMP=0x00100000001e94d9
- (_Bool)_isWakeSystemSupportedOnPlatform;	// IMP=0x00100000001e94cf
- (_Bool)_shouldWakeSystemForHandlingCommand:(id)arg1 executionContext:(id)arg2;	// IMP=0x00100000001e943f
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x00100000001e9135
- (id)controlCenterLockRestrictedCommands;	// IMP=0x00100000001e912d
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000001e9125
- (id)commandsForDomain:(id)arg1;	// IMP=0x00100000001e8e4c
- (id)domains;	// IMP=0x00100000001e8d64
- (id)handle;	// IMP=0x00100000001e8d4f
- (id)initWithRequestDelegate:(id)arg1;	// IMP=0x00100000001e8c4d

@end

