//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIApps/NSObject-Protocol.h>

@class NSArray, NSUndoManager, UIViewController;

@protocol PXSuggestLessPeopleOptionSelectionViewControllerDelegate <NSObject>
- (void)suggestLessPeople:(NSArray *)arg1 withSuggestLessOption:(long long)arg2 undoManager:(NSUndoManager *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)dismissOptionSelectionViewController:(UIViewController *)arg1 completionHandler:(void (^)(void))arg2;
- (void)completeOptionSelectionActionWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
@end

