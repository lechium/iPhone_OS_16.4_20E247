//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TCDumpBinaryToXmlState : NSObject
{
    NSString *mCurrentFieldName;	// 8 = 0x8
    NSMutableDictionary *mFieldNameToValueMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d40dc
- (id)valueForField:(id)arg1;	// IMP=0x00000000002d40b6
- (id)valueForCurrentField;	// IMP=0x00000000002d409c
- (void)cacheValueforCurrentField:(id)arg1;	// IMP=0x00000000002d4081
- (void)setCurrentField:(id)arg1;	// IMP=0x00000000002d4070
- (id)init;	// IMP=0x00000000002d3ffc

@end

