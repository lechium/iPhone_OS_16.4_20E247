//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQUProgressiveHelper : NSObject
{
    const void *mClient;	// 8 = 0x8
    CDStruct_ba543347 *mCallBacks;	// 16 = 0x10
    unsigned char started;	// 24 = 0x18
    struct __CFString *mNumbersSheetUri;	// 32 = 0x20
    float mPreviewHeight;	// 40 = 0x28
    float mPreviewWidth;	// 44 = 0x2c
    _Bool mStartedMainHTML;	// 48 = 0x30
}

- (_Bool)previewHasStreamedMainHTML;	// IMP=0x000000000005c8b4
- (void)displayGenericError:(struct __CFError *)arg1;	// IMP=0x000000000005c89b
- (float)getPreviewHeight;	// IMP=0x000000000005c890
- (float)getPreviewWidth;	// IMP=0x000000000005c885
- (void)setPreviewHeight:(float)arg1 andWidth:(float)arg2;	// IMP=0x000000000005c875
- (struct __CFString *)getNumbersSheetUri;	// IMP=0x000000000005c86b
- (void)setNumbersSheetUri:(struct __CFString *)arg1;	// IMP=0x000000000005c832
- (void)closeAttachment:(struct __CFURL *)arg1;	// IMP=0x000000000005c811
- (void)appendDataToAttachment:(struct __CFURL *)arg1 chunk:(struct __CFData *)arg2;	// IMP=0x000000000005c7bc
- (struct __CFURL *)createAttachment:(struct __CFString *)arg1 options:(struct __CFDictionary *)arg2;	// IMP=0x000000000005c79f
- (_Bool)progressiveStreamStarted;	// IMP=0x000000000005c792
- (void)startDataWithOptions:(struct __CFDictionary *)arg1;	// IMP=0x000000000005c764
- (void)dealloc;	// IMP=0x000000000005c725
- (id)initWithClient:(const void *)arg1 andCallbacks:(CDStruct_ba543347 *)arg2;	// IMP=0x000000000005c6ba

@end

