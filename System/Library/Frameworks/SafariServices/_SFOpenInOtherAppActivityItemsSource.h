//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _SFOpenInOtherAppActivityItemsSource : NSObject
{
    NSURL *_fileURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001496f7
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;	// IMP=0x000000000014967b
- (id)activityViewControllerPlaceholderItems:(id)arg1;	// IMP=0x000000000014962d
- (id)initWithFilePath:(id)arg1;	// IMP=0x00000000001495ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

