//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBarButtonItem, UINavigationController;
@protocol CNContactPickerContentDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceErrorViewController
{
    id <CNContactPickerContentDelegate> delegate;	// 8 = 0x8
    UINavigationController *navigationController;	// 16 = 0x10
    UIBarButtonItem *addContactBarButtonItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000182932
@property(readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem; // @synthesize addContactBarButtonItem;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController;
@property(nonatomic) __weak id <CNContactPickerContentDelegate> delegate; // @synthesize delegate;
- (void)invalidate;	// IMP=0x00000000001828dd
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x00000000001828d7
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001828c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

