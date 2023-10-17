//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPasswordView : UIView
{
    struct RetainPtr<NSString> _documentName;	// 8 = 0x8
    struct RetainPtr<UIScrollView> _scrollView;	// 16 = 0x10
    struct RetainPtr<UIDocumentPasswordView> _passwordView;	// 24 = 0x18
    double _savedMinimumZoomScale;	// 32 = 0x20
    double _savedMaximumZoomScale;	// 40 = 0x28
    double _savedZoomScale;	// 48 = 0x30
    struct CGSize _savedContentSize;	// 56 = 0x38
    struct RetainPtr<UIColor> _savedBackgroundColor;	// 72 = 0x48
    CDUnknownBlockType _userDidEnterPassword;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x0000000000457ab9
- (void).cxx_destruct;	// IMP=0x0000000000457a33
@property(copy, nonatomic) CDUnknownBlockType userDidEnterPassword; // @synthesize userDidEnterPassword=_userDidEnterPassword;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;	// IMP=0x0000000000457900
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;	// IMP=0x00000000004578b4
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;	// IMP=0x0000000000457865
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x000000000045756d
- (void)showPasswordFailureAlert;	// IMP=0x000000000045738f
- (void)hide;	// IMP=0x00000000004572a8
- (void)showInScrollView:(id)arg1;	// IMP=0x00000000004570e0
- (void)layoutSubviews;	// IMP=0x000000000045708a
@property(readonly, nonatomic) NSString *documentName;
- (void)dealloc;	// IMP=0x0000000000457037
- (id)initWithFrame:(struct CGRect)arg1 documentName:(id)arg2;	// IMP=0x0000000000456ee9

@end
