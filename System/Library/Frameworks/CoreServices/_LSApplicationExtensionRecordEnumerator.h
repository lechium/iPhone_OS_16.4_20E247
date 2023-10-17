//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSRecordEnumerator.h"

@class LSExtensionPointRecord, LSPropertyList, NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationExtensionRecordEnumerator : _LSRecordEnumerator
{
    NSString *_extensionPointID;	// 8 = 0x8
    unsigned int _platform;	// 16 = 0x10
    LSExtensionPointRecord *_extensionPointRecord;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
    CDUnknownBlockType _filterBlock;	// 40 = 0x28
    LSPropertyList *_propertyList;	// 48 = 0x30
    struct vector<unsigned int, std::allocator<unsigned int>> _plugins;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0000000000105c81
- (void).cxx_destruct;	// IMP=0x0000000000105c14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000105af7
- (_Bool)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;	// IMP=0x0000000000105973
- (_Bool)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x0000000000105671
- (id)initWithExtensionPoint:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000105575
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 platform:(unsigned int)arg3 filter:(CDUnknownBlockType)arg4;	// IMP=0x000000000010546b
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;	// IMP=0x0000000000105452
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2 platform:(unsigned int)arg3;	// IMP=0x000000000010543c
- (id)initWithExtensionPointIdentifier:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000105426
- (_Bool)_evaluatePluginNoIO:(unsigned int)arg1 data:(const struct LSPluginData *)arg2 extensionPointID:(unsigned int)arg3 context:(struct LSContext *)arg4;	// IMP=0x0000000000105df7
- (_Bool)_getExtensionPointID:(unsigned int *)arg1 context:(struct LSContext *)arg2 error:(id *)arg3;	// IMP=0x0000000000105d30

@end
