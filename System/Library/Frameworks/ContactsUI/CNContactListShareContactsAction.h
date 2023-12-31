//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactCardFieldPicker, CNContactListShareContactsActionContext, NSArray, NSString, UIActivityViewController, UIView;
@protocol CNContactListActionDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListShareContactsAction : NSObject
{
    id <CNContactListActionDelegate> _delegate;	// 8 = 0x8
    CNContactListShareContactsActionContext *_context;	// 16 = 0x10
    NSArray *_contacts;	// 24 = 0x18
    NSArray *_filteredContacts;	// 32 = 0x20
    CNContactCardFieldPicker *_fieldPicker;	// 40 = 0x28
    UIActivityViewController *_activityViewController;	// 48 = 0x30
    UIView *_sourceView;	// 56 = 0x38
}

+ (id)descriptorForRequiredKeys;	// IMP=0x0010000000249436
- (void).cxx_destruct;	// IMP=0x00000000002492c0
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) CNContactCardFieldPicker *fieldPicker; // @synthesize fieldPicker=_fieldPicker;
@property(retain, nonatomic) NSArray *filteredContacts; // @synthesize filteredContacts=_filteredContacts;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(readonly, nonatomic) CNContactListShareContactsActionContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <CNContactListActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contactCardFieldPicker:(id)arg1 didFinishWithContacts:(id)arg2;	// IMP=0x0000000000249081
- (id)customActionViewControllerForActivityViewController:(id)arg1;	// IMP=0x000000000024906f
- (id)customLocalizedActionTitleForActivityViewController:(id)arg1;	// IMP=0x0000000000249013
- (_Bool)_customizationAvailableForActivityViewController:(id)arg1;	// IMP=0x0000000000248f4a
- (id)_customizationGroupsForActivityViewController:(id)arg1;	// IMP=0x0000000000248f3d
- (id)activityItemForContacts:(id)arg1;	// IMP=0x0000000000248e41
- (void)presentShareSheet;	// IMP=0x0000000000248a6f
- (void)presentFilterFieldPicker;	// IMP=0x00000000002489c9
- (void)setupForContactFieldPicker;	// IMP=0x000000000024890a
- (_Bool)editRequiresAuthorization;	// IMP=0x0000000000248902
- (void)performAction;	// IMP=0x0000000000248864
- (_Bool)shouldReloadListOnCompletion;	// IMP=0x000000000024885c
- (id)initWithContacts:(id)arg1 sourceView:(id)arg2 context:(id)arg3;	// IMP=0x0000000000248793
- (id)initWithContacts:(id)arg1 sourceView:(id)arg2;	// IMP=0x000000000024877e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

