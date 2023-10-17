//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDPreviewAction.h"

__attribute__((visibility("hidden")))
@interface DDURLPreviewAction : DDPreviewAction
{
}

+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x0080000000009f22
+ (id)validatedURLWithURL:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x0080000000009dc8
- (id)commitURL;	// IMP=0x000000000000a099
- (void)setPreviewMode:(_Bool)arg1;	// IMP=0x000000000000a04d
- (_Bool)requiresEmbeddingNavigationController;	// IMP=0x000000000000a045
- (void)safariViewControllerDidFinish:(id)arg1;	// IMP=0x000000000000a03f
- (id)createViewController;	// IMP=0x0000000000009f8c
- (id)menuActions;	// IMP=0x0000000000009930
- (_Bool)showMenuTitle;	// IMP=0x0000000000009928

@end
