//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SKUIAttributedStringLayout, SKUIButtonViewElement;
@protocol SKUIToggleButtonDelegate;

__attribute__((visibility("hidden")))
@interface SKUIToggleButton
{
    _Bool _autoIncrement;	// 8 = 0x8
    long long _autoIncrementCount;	// 16 = 0x10
    long long _count;	// 24 = 0x18
    SKUIButtonViewElement *_element;	// 32 = 0x20
    id <SKUIToggleButtonDelegate> _delegate;	// 40 = 0x28
    NSString *_itemIdentifier;	// 48 = 0x30
    SKUIAttributedStringLayout *_nonToggledLayout;	// 56 = 0x38
    NSString *_titleToggleString;	// 64 = 0x40
    SKUIAttributedStringLayout *_toggledLayout;	// 72 = 0x48
    _Bool _toggled;	// 80 = 0x50
    NSString *_toggleItemIdentifier;	// 88 = 0x58
    NSString *_nonToggledTitle;	// 96 = 0x60
    NSString *_toggledTitle;	// 104 = 0x68
    id _nonToggledContents;	// 112 = 0x70
    id _toggledContents;	// 120 = 0x78
    long long _toggleButtonType;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000001fb9b7
@property(nonatomic) long long toggleButtonType; // @synthesize toggleButtonType=_toggleButtonType;
@property(retain, nonatomic) id toggledContents; // @synthesize toggledContents=_toggledContents;
@property(retain, nonatomic) id nonToggledContents; // @synthesize nonToggledContents=_nonToggledContents;
@property(retain, nonatomic) NSString *toggledTitle; // @synthesize toggledTitle=_toggledTitle;
@property(retain, nonatomic) NSString *nonToggledTitle; // @synthesize nonToggledTitle=_nonToggledTitle;
@property(nonatomic) __weak id <SKUIToggleButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isToggled) _Bool toggled; // @synthesize toggled=_toggled;
@property(retain, nonatomic) NSString *toggleItemIdentifier; // @synthesize toggleItemIdentifier=_toggleItemIdentifier;
@property(nonatomic) __weak SKUIButtonViewElement *element; // @synthesize element=_element;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long autoIncrementCount; // @synthesize autoIncrementCount=_autoIncrementCount;
@property(nonatomic) _Bool autoIncrement; // @synthesize autoIncrement=_autoIncrement;
- (void)itemStateCenter:(id)arg1 itemStateChanged:(id)arg2;	// IMP=0x00000000001fb5b8
- (id)_toggledLayout;	// IMP=0x00000000001fb53a
- (id)_titleAttributes;	// IMP=0x00000000001fb2bc
- (void)_showToggleState:(_Bool)arg1;	// IMP=0x00000000001fb050
- (void)_sendWillAnimate;	// IMP=0x00000000001fafc6
- (void)_sendDidAnimate;	// IMP=0x00000000001faf3c
- (id)_nonToggledLayout;	// IMP=0x00000000001faebe
- (id)_layoutForString:(id)arg1;	// IMP=0x00000000001fada9
- (void)setButtonTitleText:(id)arg1;	// IMP=0x00000000001facff
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001faa56
- (void)setToggled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001faa38
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001fa89b
- (void)dealloc;	// IMP=0x00000000001fa826
- (id)init;	// IMP=0x00000000001fa79b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
