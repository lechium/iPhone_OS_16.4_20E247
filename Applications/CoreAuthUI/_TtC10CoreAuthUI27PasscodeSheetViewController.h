//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC10CoreAuthUI27PasscodeSheetViewController
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *authorizationViewManager;	// 16 = 0x10
    MISSING_TYPE *failures;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0040000000024c30
- (id)initWithInternalInfo:(id)arg1 parent:(id)arg2;	// IMP=0x0010000000024b80
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000024910
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000024800
- (id)initWithInternalInfo:(id)arg1 mechanism:(id)arg2 backoffCounter:(id)arg3 remoteUIHost:(id)arg4 allowsLandscape:(_Bool)arg5;	// IMP=0x0010000000024680
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000244c0
- (_Bool)shouldPresentWithAnimation;	// IMP=0x0010000000024100
- (_Bool)isFullScreenController;	// IMP=0x00100000000240d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000024050
- (void)loadView;	// IMP=0x00100000000231b0
@property(nonatomic, readonly) long long preferredStatusBarStyle;

@end
