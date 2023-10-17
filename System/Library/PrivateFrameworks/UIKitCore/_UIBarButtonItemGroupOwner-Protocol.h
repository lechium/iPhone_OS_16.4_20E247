//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UIBarButtonItem, UIBarButtonItemGroup;

@protocol _UIBarButtonItemGroupOwner <NSObject>
- (void)_groupDidUpdateVisibility:(UIBarButtonItemGroup *)arg1;
- (void)_groupDidUpdateRepresentative:(UIBarButtonItemGroup *)arg1 fromRepresentative:(UIBarButtonItem *)arg2;
- (void)_groupDidUpdateItems:(UIBarButtonItemGroup *)arg1 removedItems:(NSArray *)arg2;

@optional
- (void)_groupNeedsNSToolbarUpdate:(UIBarButtonItemGroup *)arg1;
@end
