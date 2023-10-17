//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactListActionConfiguration, CNContactListActionExecutor, CNContactOrbActionsController, NSArray, NSString;
@protocol CNContactListActionHelperDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListActionHelper : NSObject
{
    _Bool _includesContactOrbActions;	// 8 = 0x8
    _Bool _includesEditingActions;	// 9 = 0x9
    id <CNContactListActionHelperDelegate> _delegate;	// 16 = 0x10
    CNContactListActionConfiguration *_actionConfiguration;	// 24 = 0x18
    NSArray *_contacts;	// 32 = 0x20
    CNContactListActionExecutor *_actionExecutor;	// 40 = 0x28
    CNContactOrbActionsController *_contactActionsController;	// 48 = 0x30
}

+ (id)descriptorForRequiredKeysForMultiSelectAction:(_Bool)arg1;	// IMP=0x001000000028ec92
- (void).cxx_destruct;	// IMP=0x000000000028e9b9
@property(retain, nonatomic) CNContactOrbActionsController *contactActionsController; // @synthesize contactActionsController=_contactActionsController;
@property(retain, nonatomic) CNContactListActionExecutor *actionExecutor; // @synthesize actionExecutor=_actionExecutor;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) _Bool includesEditingActions; // @synthesize includesEditingActions=_includesEditingActions;
@property(nonatomic) _Bool includesContactOrbActions; // @synthesize includesContactOrbActions=_includesContactOrbActions;
@property(retain, nonatomic) CNContactListActionConfiguration *actionConfiguration; // @synthesize actionConfiguration=_actionConfiguration;
@property(nonatomic) __weak id <CNContactListActionHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)presentingViewControllerForActionsController:(id)arg1;	// IMP=0x000000000028e8f0
- (void)contactOrbActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;	// IMP=0x000000000028e7c8
- (id)presentingViewControllerForActions;	// IMP=0x000000000028e778
- (void)actionDidFinish:(id)arg1;	// IMP=0x000000000028e706
- (void)action:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000028e680
- (_Bool)canShowContactActionsForContacts:(id)arg1;	// IMP=0x000000000028e62b
- (id)contactActionsMenuFromItems:(id)arg1;	// IMP=0x000000000028e5ef
- (id)contactActionsMenuForContact:(id)arg1;	// IMP=0x000000000028e4e9
- (void)copyContacts:(id)arg1;	// IMP=0x000000000028e43f
- (_Bool)canShowSetAsMyCardActionForContacts:(id)arg1;	// IMP=0x000000000028e391
- (void)updateMeContact:(id)arg1;	// IMP=0x000000000028e2c0
- (_Bool)canShowMergeActionForContacts:(id)arg1;	// IMP=0x000000000028e2a3
- (void)mergeContacts:(id)arg1;	// IMP=0x000000000028e1d2
- (void)deleteContacts:(id)arg1 dataSourceFilter:(id)arg2;	// IMP=0x000000000028e13c
- (void)deleteContacts:(id)arg1;	// IMP=0x000000000028e06b
- (void)shareContacts:(id)arg1 sourceView:(id)arg2;	// IMP=0x000000000028df9f
- (_Bool)canRemoveFromGroup;	// IMP=0x000000000028deaf
- (void)removeContactsFromGroup:(id)arg1 withConfirmation:(_Bool)arg2;	// IMP=0x000000000028ddd4
- (id)trailingSwipeActionsForContact:(id)arg1 dataSourceFilter:(id)arg2;	// IMP=0x000000000028dc1d
- (id)actionsForContacts:(id)arg1 dataSourceFilter:(id)arg2 sourceView:(id)arg3;	// IMP=0x000000000028d021
- (id)searchActionsForContacts:(id)arg1;	// IMP=0x000000000028cf59
- (id)initWithContactStore:(id)arg1 environment:(id)arg2 contactFormatter:(id)arg3 undoManager:(id)arg4;	// IMP=0x000000000028cdf9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
