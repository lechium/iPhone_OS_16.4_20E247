//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, GEOMiniCard, NSString, UITableView, VKRouteAnnotation;

@interface RouteAnnotationContaineeViewController
{
    _Bool _didStartObservingTableViewContentSize;	// 8 = 0x8
    VKRouteAnnotation *_routeAnnotation;	// 16 = 0x10
    CDUnknownBlockType _dismissHandler;	// 24 = 0x18
    ContainerHeaderView *_headerView;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000084bb4c
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ContainerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) VKRouteAnnotation *routeAnnotation; // @synthesize routeAnnotation=_routeAnnotation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000084ba77
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000084ba41
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000084ba36
- (void)headerViewTapped:(id)arg1;	// IMP=0x001000000084b9f9
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000084b9e7
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x001000000084b8d4
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000084b849
- (id)contentView;	// IMP=0x001000000084b837
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x001000000084b7c3
@property(readonly, nonatomic) GEOMiniCard *infoCard;
- (void)updateTheme;	// IMP=0x001000000084b709
- (void)_updateImageInCell:(id)arg1;	// IMP=0x001000000084b507
- (void)_updateContentInCell:(id)arg1;	// IMP=0x001000000084b1f6
- (struct CGSize)calculatePreferredContentSize;	// IMP=0x001000000084b12e
- (void)_updatePreferredContentSize;	// IMP=0x001000000084b0af
- (void)_updateContent;	// IMP=0x001000000084af72
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000084af25
- (void)dealloc;	// IMP=0x001000000084ae95
- (void)viewDidLoad;	// IMP=0x001000000084a547
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000084a4e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
