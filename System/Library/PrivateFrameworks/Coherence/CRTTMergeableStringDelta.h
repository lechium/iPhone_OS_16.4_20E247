//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ObjCVersion;
@protocol CRTTMergeableStringStorage;

__attribute__((visibility("hidden")))
@interface CRTTMergeableStringDelta : NSObject
{
    struct vector<TopoSubstring *, std::allocator<TopoSubstring *>> orderedSubstrings;	// 8 = 0x8
    id <CRTTMergeableStringStorage> _attributedString;	// 32 = 0x20
    ObjCVersion *_fromVersion;	// 40 = 0x28
    ObjCVersion *_fromAddedByVersion;	// 48 = 0x30
    ObjCVersion *_version;	// 56 = 0x38
    ObjCVersion *_addedByVersion;	// 64 = 0x40
    long long _renameGeneration;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x000000000001fbec
- (void).cxx_destruct;	// IMP=0x000000000001fb8d
@property(nonatomic) long long renameGeneration; // @synthesize renameGeneration=_renameGeneration;
@property(retain, nonatomic) ObjCVersion *addedByVersion; // @synthesize addedByVersion=_addedByVersion;
@property(retain, nonatomic) ObjCVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) ObjCVersion *fromAddedByVersion; // @synthesize fromAddedByVersion=_fromAddedByVersion;
@property(retain, nonatomic) ObjCVersion *fromVersion; // @synthesize fromVersion=_fromVersion;
@property(readonly, nonatomic) id <CRTTMergeableStringStorage> attributedString; // @synthesize attributedString=_attributedString;
- (id)dotDescription:(unsigned long long)arg1;	// IMP=0x000000000001f4a1
- (void)compareSubstring:(const void *)arg1 toSubstring:(const void *)arg2 fromString:(id)arg3 toString:(id)arg4 charMap:(const void *)arg5 deltaCharMap:(void *)arg6 compareElements:(CDUnknownBlockType)arg7;	// IMP=0x000000000001eeb3
- (void)compareSameSubstring:(const void *)arg1 toSubstring:(const void *)arg2 from:(id)arg3 toString:(id)arg4 charMap:(const void *)arg5 deltaCharMap:(void *)arg6 compareElements:(CDUnknownBlockType)arg7;	// IMP=0x000000000001e2e7
- (void)addStorageTo:(void *)arg1 fromStorage:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000001e25f
- (void)findAndCompareSubstring:(const void *)arg1 from:(id)arg2 toString:(id)arg3 charMap:(const void *)arg4 deltaCharMap:(void *)arg5 compareElements:(CDUnknownBlockType)arg6;	// IMP=0x000000000001df0c
- (void)addChildTo:(const void *)arg1 child:(const void *)arg2 deltaCharMap:(void *)arg3;	// IMP=0x000000000001deab
- (void *)addSubstring:(const struct TopoIDRange *)arg1 requiresExactLength:(_Bool)arg2 deltaCharMap:(void *)arg3;	// IMP=0x000000000001dd41
- (_Bool)saveToEncoder:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000001d8af
- (id)initWithDecoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d4dc
- (void *)orderedSubstrings;	// IMP=0x000000000001d4d2
- (void)dealloc;	// IMP=0x000000000001d44e
- (id)initWithDeltasTo:(id)arg1 from:(id)arg2 compareElements:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ca70

@end

