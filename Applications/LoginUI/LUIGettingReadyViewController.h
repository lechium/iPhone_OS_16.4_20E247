//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LUIDashBoardView, NSString, UMUser;

@interface LUIGettingReadyViewController
{
    _Bool _isTemporarySession;	// 8 = 0x8
    UMUser *_user;	// 16 = 0x10
    CDUnknownBlockType _displayAnimationCompletionBlock;	// 24 = 0x18
    unsigned long long _titleType;	// 32 = 0x20
    LUIDashBoardView *_gettingReadyToSwitchView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000006a34
@property(retain, nonatomic) LUIDashBoardView *gettingReadyToSwitchView; // @synthesize gettingReadyToSwitchView=_gettingReadyToSwitchView;
@property(nonatomic) unsigned long long titleType; // @synthesize titleType=_titleType;
@property(copy, nonatomic) CDUnknownBlockType displayAnimationCompletionBlock; // @synthesize displayAnimationCompletionBlock=_displayAnimationCompletionBlock;
@property(nonatomic) _Bool isTemporarySession; // @synthesize isTemporarySession=_isTemporarySession;
@property(retain, nonatomic) UMUser *user; // @synthesize user=_user;
- (_Bool)suppressesWiFiPicker;	// IMP=0x001000000000698f
- (_Bool)shouldAllowUIUpdate;	// IMP=0x0010000000006987
- (id)userForStatusBarDisplay;	// IMP=0x0010000000006975
- (_Bool)shouldSetIdleTimerAsIfLocked;	// IMP=0x001000000000696d
- (id)localizedStringForKey:(id)arg1 forLanguages:(id)arg2;	// IMP=0x0010000000006718
- (void)_updateGettingReadyToSwitchViewTitle;	// IMP=0x001000000000658e
- (_Bool)shouldAutorotate;	// IMP=0x0010000000006586
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000064bb
- (void)viewDidLoad;	// IMP=0x001000000000629c
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000006251

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

