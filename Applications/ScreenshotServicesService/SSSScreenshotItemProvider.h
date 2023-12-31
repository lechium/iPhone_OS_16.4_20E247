//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSString, SSSScreenshot;

@interface SSSScreenshotItemProvider : UIActivityItemProvider
{
    SSSScreenshot *_screenshot;	// 8 = 0x8
    NSString *_overrideName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000399ce
@property(retain, nonatomic) NSString *overrideName; // @synthesize overrideName=_overrideName;
@property(nonatomic) __weak SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;	// IMP=0x00100000000398f9
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x0010000000039876
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x0010000000039864
- (id)activityViewControllerPlaceholderItem:(id)arg1;	// IMP=0x0010000000039805
- (id)nameForScreenshot;	// IMP=0x0010000000039799
- (id)item;	// IMP=0x001000000003975c
- (id)placeholderItemForScreenshot:(id)arg1;	// IMP=0x0010000000039724
- (id)initWithScreenshot:(id)arg1;	// IMP=0x001000000003968a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

