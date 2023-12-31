//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, NSArray, NSMutableArray, NSString, UITableView;
@protocol ActionCoordination, SharedTripAutosharingContaineeViewControllerDelegate;

@interface SharedTripAutosharingContaineeViewController
{
    ContainerHeaderView *_headerView;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    NSMutableArray *_contacts;	// 24 = 0x18
    id <ActionCoordination> _delegate;	// 32 = 0x20
    id <SharedTripAutosharingContaineeViewControllerDelegate> _autosharingDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000008b1f21
@property(nonatomic) __weak id <SharedTripAutosharingContaineeViewControllerDelegate> autosharingDelegate; // @synthesize autosharingDelegate=_autosharingDelegate;
@property(nonatomic) __weak id <ActionCoordination> delegate; // @synthesize delegate=_delegate;
- (void)_deleteContact:(id)arg1;	// IMP=0x00100000008b1dc3
- (void)_addContact:(id)arg1;	// IMP=0x00100000008b1cd3
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000008b1b17
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000008b1acd
- (void)_updateImage:(id)arg1 forContact:(id)arg2;	// IMP=0x00100000008b19cb
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008b10a9
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000008b1088
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000008b107d
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000008b100c
- (id)contentView;	// IMP=0x00100000008b0ff7
- (id)headerView;	// IMP=0x00100000008b0fe2
- (void)viewDidLoad;	// IMP=0x00100000008b07d5
@property(copy, nonatomic) NSArray *contacts;
- (id)initWithContacts:(id)arg1;	// IMP=0x00100000008b06e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

