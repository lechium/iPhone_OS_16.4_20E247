//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface WKSelectPopover
{
    struct RetainPtr<WKSelectTableViewController> _tableViewController;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000482787
- (void).cxx_destruct;	// IMP=0x0000000000482760
@property(readonly, nonatomic) UITableViewController *tableViewController;
- (void)_userActionDismissedPopover:(id)arg1;	// IMP=0x000000000048273d
- (void)controlEndEditing;	// IMP=0x0000000000482701
- (void)controlBeginEditing;	// IMP=0x00000000004826ed
- (id)controlView;	// IMP=0x00000000004826e5
- (void)dealloc;	// IMP=0x0000000000482651
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;	// IMP=0x000000000048244b
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x000000000048279f

@end

