//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ConverterUtils : NSObject
{
}

+ (id)convertMentionDetectorResponseFromCppToObjC:(void *)arg1;	// IMP=0x008000000008e2d2
+ (id)convertMentionResolverResponseFromCppToObjC:(void *)arg1;	// IMP=0x008000000008e1ea
+ (unique_ptr_f525a9db)convertMentionResolverRequestFromObjCToCpp:(id)arg1;	// IMP=0x008000000008e147
+ (unique_ptr_db728b78)convertMentionDetectorRequestFromObjCToCpp:(id)arg1;	// IMP=0x008000000008e0a4
+ (struct Reader)getCppReaderFromObjCObject:(id)arg1;	// IMP=0x008000000008e017

@end
