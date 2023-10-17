//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class NSString, NSURL, SGSuggestedEventLaunchInfo, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface EKEventDetailURLCell : EKEventDetailCell
{
    UILabel *_URLTitleView;	// 24 = 0x18
    UITextView *_URLView;	// 32 = 0x20
    int _lastLayoutPosition;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    SGSuggestedEventLaunchInfo *_launchInfo;	// 56 = 0x38
}

+ (Class)_SGSuggestionsServiceClass;	// IMP=0x001000000016a51e
- (void).cxx_destruct;	// IMP=0x000000000016bd0c
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x000000000016bbb9
- (id)_URLView;	// IMP=0x000000000016bab5
- (id)_URLTitleView;	// IMP=0x000000000016b969
- (void)layoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x000000000016b84c
- (void)_layoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x000000000016b141
- (void)layoutSubviews;	// IMP=0x000000000016b0d6
- (void)updateLinkWithLaunchInfo;	// IMP=0x000000000016af5f
- (void)updateLinkWithURL;	// IMP=0x000000000016a8a4
- (_Bool)updateLink;	// IMP=0x000000000016a863
- (_Bool)update;	// IMP=0x000000000016a718
- (void)updateWithURL:(id)arg1 launchInfo:(id)arg2;	// IMP=0x000000000016a67a
- (id)initWithEvent:(id)arg1 launchInfo:(id)arg2 editable:(_Bool)arg3 style:(long long)arg4;	// IMP=0x000000000016a5d7
- (id)initWithEvent:(id)arg1 url:(id)arg2 editable:(_Bool)arg3 style:(long long)arg4;	// IMP=0x000000000016a534

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
