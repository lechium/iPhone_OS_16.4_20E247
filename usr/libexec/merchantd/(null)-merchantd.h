//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface (null) (merchantd)
- (void)setVoiceOverWithEnabled:(_Bool)arg1;	// IMP=0x0200000000057050
- (void)reportGuidanceUpdateWithVisible:(_Bool)arg1 trigger:(id)arg2;	// IMP=0x0010000000056e20
- (void)reportPINErrorWithError:(long long)arg1 isCardRequest:(_Bool)arg2 isAccessibilityEnabled:(_Bool)arg3;	// IMP=0x0010000000056d20
- (void)pinDataReceivedWithPinData:(id)arg1 isCardRequest:(_Bool)arg2 isAccessibilityEnabled:(_Bool)arg3;	// IMP=0x0010000000056a50
- (void)pinAuthResultWithError:(id)arg1 cancelsFlow:(_Bool)arg2;	// IMP=0x00100000000566d0
- (void)pinAuthNeeded;	// IMP=0x0010000000056400
- (void)pinValidateSession;	// IMP=0x0010000000056140
- (void)pinUIDidLoad;	// IMP=0x0010000000055ac0
- (void)tapUIFinishedWithExpected:(_Bool)arg1;	// IMP=0x0010000000055a80
- (void)tapUIRequestingCancel;	// IMP=0x00100000000556b0
- (void)tapUIRequestingRetry;	// IMP=0x0010000000055680
- (void)tapUIDidLoad;	// IMP=0x0010000000055590
- (void)startIssuerPINEntry:(id)arg1 transactionId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000551d0
- (void);	// IMP=0x0010000000054520
- (void)startTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000541b0
- (void)closeSession:(_Bool)arg1;	// IMP=0x00100000000526d0
- (void)startSession:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000521d0
- (void)status:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050ff0
- (void)linkAccount:(id)arg1 relink:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050f50
- (void)isAccountLinked:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000508e0
- (void)getTerminalIdWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000050880
- (void)createContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050860
@end
