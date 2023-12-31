//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewController.h"

@class NSArray, NSMutableArray, UIAlertControllerVisualStyle, UICollectionViewFlowLayout;
@protocol _UIAlertControllerTextFieldViewControllerContaining;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewController : UICollectionViewController
{
    NSMutableArray *textFieldViews;	// 424 = 0x1a8
    NSMutableArray *textFields;	// 432 = 0x1b0
    _Bool _textFieldsCanBecomeFirstResponder;	// 440 = 0x1b8
    UIAlertControllerVisualStyle *_visualStyle;	// 448 = 0x1c0
    UICollectionViewFlowLayout *_collectionViewLayout;	// 456 = 0x1c8
    _Bool _hidden;	// 464 = 0x1d0
    id <_UIAlertControllerTextFieldViewControllerContaining> _container;	// 472 = 0x1d8
}

- (void).cxx_destruct;	// IMP=0x0000000000055a3f
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) __weak id <_UIAlertControllerTextFieldViewControllerContaining> container; // @synthesize container=_container;
@property(readonly) NSArray *textFields; // @synthesize textFields;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000559e4
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000000559dc
- (_Bool)resignFirstResponder;	// IMP=0x000000000005582c
- (void)updateTextFieldStyle;	// IMP=0x0000000000055698
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000005559f
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000005558d
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000055582
@property(nonatomic) _Bool textFieldsCanBecomeFirstResponder;
- (void)removeAllTextFields;	// IMP=0x0000000000055480
- (long long)numberOfTextFields;	// IMP=0x0000000000055463
- (id)textFieldContainerViews;	// IMP=0x0000000000055278
- (id)textFieldAtIndex:(long long)arg1;	// IMP=0x000000000005521d
- (void)_updatePreferredContentSize;	// IMP=0x00000000000550f0
- (void)_returnKeyPressedInTextField:(id)arg1;	// IMP=0x0000000000054ecb
- (id)addTextFieldWithPlaceholder:(id)arg1;	// IMP=0x0000000000054ce4
- (double)_bottomMarginForTextFields;	// IMP=0x0000000000054c08
@property(nonatomic) UIAlertControllerVisualStyle *visualStyle;
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000054af3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005490e
- (void)viewDidLoad;	// IMP=0x00000000000548a2
- (id)init;	// IMP=0x0000000000054699

@end

