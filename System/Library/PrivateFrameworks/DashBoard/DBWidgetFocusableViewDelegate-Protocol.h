//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class CRSDashboardFocusableItem;

@protocol DBWidgetFocusableViewDelegate <NSObject>
- (void)selectedFocusableItem:(CRSDashboardFocusableItem *)arg1;
- (void)focusableItem:(CRSDashboardFocusableItem *)arg1 didChangePressed:(_Bool)arg2;
- (void)focusableItem:(CRSDashboardFocusableItem *)arg1 didChangeFocused:(_Bool)arg2;
@end
