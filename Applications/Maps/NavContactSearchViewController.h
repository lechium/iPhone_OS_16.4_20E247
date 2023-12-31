//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrderedSet;
@protocol NavActionCoordination;

@interface NavContactSearchViewController
{
    NSOrderedSet *_activeContactsValues;	// 120 = 0x78
    id <NavActionCoordination> _navActionCoordinator;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000009ce624
@property(nonatomic) __weak id <NavActionCoordination> navActionCoordinator; // @synthesize navActionCoordinator=_navActionCoordinator;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000009ce4b4
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000009ce3fa
- (void)_contactValuesSelected:(id)arg1;	// IMP=0x00100000009ce379
- (void)loadContaineeHeaderView;	// IMP=0x00100000009ce141
- (void)viewDidLoad;	// IMP=0x00100000009cdff6

@end

