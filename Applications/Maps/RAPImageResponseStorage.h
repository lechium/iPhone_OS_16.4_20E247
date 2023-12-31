//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPImageResponseStorage : NSObject
{
}

+ (void)enumerateOverResponseFilePathsForSubmissionIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00400000005a3732
+ (id)baseFilePathWithSubmissionIdentifier:(id)arg1;	// IMP=0x00100000005a3316
- (_Bool)removeImageUploadObjectsForSubmissionIdentifier:(id)arg1;	// IMP=0x00400000005a3641
- (id)fetchImageUploadObjectsForSubmissionIdentifier:(id)arg1;	// IMP=0x00100000005a3473
- (_Bool)saveResponseData:(id)arg1 forSubmissionIdentifier:(id)arg2 imageIdentifier:(id)arg3;	// IMP=0x00100000005a33cb

@end

