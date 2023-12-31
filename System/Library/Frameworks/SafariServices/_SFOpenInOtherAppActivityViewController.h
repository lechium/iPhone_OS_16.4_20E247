//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_SFActivityViewController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _SFOpenInOtherAppActivityViewController : _SFActivityViewController
{
    NSString *_filePath;	// 8 = 0x8
}

+ (_Bool)canOpenWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;	// IMP=0x0060000000149cde
+ (id)_activityItemsForFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;	// IMP=0x0060000000149977
+ (id)_applicationsForDocumentProxy:(id)arg1;	// IMP=0x0060000000149707
- (void).cxx_destruct;	// IMP=0x0000000000149f8c
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)_prepareActivity:(id)arg1;	// IMP=0x0000000000149eb3
- (id)initWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3;	// IMP=0x0000000000149d11

@end

