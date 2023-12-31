//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperKit/UIDropInteractionDelegate-Protocol.h>

@class UIDragItem, UIDropInteraction;
@protocol UIDropSession;

@protocol UIDropInteractionDelegate_Private <UIDropInteractionDelegate>

@optional
- (void)_dropInteraction:(UIDropInteraction *)arg1 delayedPreviewProviderForDroppingItem:(UIDragItem *)arg2 previewProvider:(void (^)(UITargetedDragPreview *))arg3;
- (long long)_dropInteraction:(UIDropInteraction *)arg1 dataOwnerForSession:(id <UIDropSession>)arg2;
@end

