//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewController.h"

@class NSObject;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvarViewController : UITableViewController
{
    NSObject *_inspectedObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000012bf6a9
@property(nonatomic) __weak NSObject *inspectedObject; // @synthesize inspectedObject=_inspectedObject;
- (void)prepareForDisplayAsTopLevelDebuggingViewController;	// IMP=0x00000000012bf591
- (id)_ivarsForInspectedObjectInClass:(Class)arg1;	// IMP=0x00000000012bf3d5
- (id)_classHierarchyForInspectedObject;	// IMP=0x00000000012bf309
- (Class)_classForTableSection:(long long)arg1;	// IMP=0x00000000012bf290
- (id)_ivarForIndexPath:(id)arg1;	// IMP=0x00000000012bf1dd
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000012bf0a6
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000012bf047
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000012bf003
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000012befa9
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000012beebe
- (id)init;	// IMP=0x00000000012beded

@end

