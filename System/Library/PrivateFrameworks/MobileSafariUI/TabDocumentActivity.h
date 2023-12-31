//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/_SFActivity.h>

@class TabDocument;

__attribute__((visibility("hidden")))
@interface TabDocumentActivity : _SFActivity
{
    TabDocument *_tabDocument;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ee606
@property(readonly, nonatomic) TabDocument *tabDocument; // @synthesize tabDocument=_tabDocument;
- (id)embeddedActivityViewControllerWithTabDocument:(id)arg1;	// IMP=0x00000000000ee5ed
- (id)_embeddedActivityViewController;	// IMP=0x00000000000ee5d0
- (void)performActivityWithTabDocument:(id)arg1;	// IMP=0x00000000000ee5ca
- (void)performActivity;	// IMP=0x00000000000ee503
- (void)prepareWithTabDocument:(id)arg1;	// IMP=0x00000000000ee4fd
- (void)prepareWithTabDocument:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ee4b3
- (void)_prepareWithActivityItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ee3df
- (_Bool)canPerformWithTabDocument:(id)arg1;	// IMP=0x00000000000ee3d7
@property(readonly, nonatomic) _Bool canPerformOnNewTabPage;
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x00000000000ee2d7
- (long long)actionTypeWithTabDocument:(id)arg1;	// IMP=0x00000000000ee2cf
@property(readonly, nonatomic) long long actionType;
- (id)activityImageWithTabDocument:(id)arg1;	// IMP=0x00000000000ee2aa
- (id)_activityImage;	// IMP=0x00000000000ee28d
- (id)systemImageNameWithTabDocument:(id)arg1;	// IMP=0x00000000000ee285
- (id)_systemImageName;	// IMP=0x00000000000ee268
- (id)activityTitleWithTabDocument:(id)arg1;	// IMP=0x00000000000ee25b
- (id)activityTitle;	// IMP=0x00000000000ee23e

@end

