//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSItemProvider, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIShareURLActivityItem : NSObject
{
    NSItemProvider *_itemProvider;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSURL *_imageURL;	// 32 = 0x20
    NSURL *_shareURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000014d556
@property(readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;	// IMP=0x000000000014d06b
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x000000000014d05d
- (id)activityViewControllerPlaceholderItem:(id)arg1;	// IMP=0x000000000014d04f
- (id)initWithURL:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4;	// IMP=0x000000000014cf6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

