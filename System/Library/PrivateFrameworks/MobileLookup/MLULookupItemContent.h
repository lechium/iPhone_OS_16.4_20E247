//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSURL, UIViewController;

__attribute__((visibility("hidden")))
@interface MLULookupItemContent : NSObject
{
    _Bool _valid;	// 8 = 0x8
    UIViewController *_previewViewController;	// 16 = 0x10
    unsigned long long _commitType;	// 24 = 0x18
    UIViewController *_commitViewController;	// 32 = 0x20
    NSURL *_commitURL;	// 40 = 0x28
}

+ (id)contentWithText:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0060000000001448
+ (id)contentWithAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2;	// IMP=0x00600000000013ec
+ (id)contentWithURL:(id)arg1 result:(struct __DDResult *)arg2 documentProperties:(id)arg3;	// IMP=0x006000000000133e
- (void).cxx_destruct;	// IMP=0x000000000000184e
@property _Bool valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSURL *commitURL; // @synthesize commitURL=_commitURL;
@property(retain, nonatomic) UIViewController *commitViewController; // @synthesize commitViewController=_commitViewController;
@property(nonatomic) unsigned long long commitType; // @synthesize commitType=_commitType;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(readonly, nonatomic) CNContact *contact;
- (void)dismissViewController;	// IMP=0x000000000000177e
- (_Bool)commitPreviewInController:(id)arg1;	// IMP=0x000000000000160e
- (void)setupViewControllerInCommitMode;	// IMP=0x00000000000014d3
- (_Bool)wantsSeamlessCommit;	// IMP=0x00000000000014b9
- (id)children;	// IMP=0x00000000000014b1
- (id)requiredEntitlements;	// IMP=0x00000000000014a9

@end

