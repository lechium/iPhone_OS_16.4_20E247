//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLiOSContextMenuController, _TtC8Freeform21CRLEditingCoordinator;

@protocol CRLiOSContextMenuControllerDelegate <NSObject>
@property(readonly, nonatomic) _TtC8Freeform21CRLEditingCoordinator *editingCoordinator;
- (void)contextMenuDidHideForContextMenuController:(CRLiOSContextMenuController *)arg1;

@optional
- (_Bool)contextMenuPositionShouldUpdateForContextMenuController:(CRLiOSContextMenuController *)arg1;
@end

