//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

__attribute__((visibility("hidden")))
@interface NSConcreteData : NSData
{
    unsigned long long _length;	// 8 = 0x8
    void *_bytes;	// 16 = 0x10
    CDUnknownBlockType _deallocator;	// 24 = 0x18
}

- (_Bool)_providesConcreteBacking;	// IMP=0x00000000003f80b4
- (id)_createDispatchData;	// IMP=0x00000000003f808b
- (void)dealloc;	// IMP=0x00000000003f7ffc
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;	// IMP=0x00000000003f7f9f
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x00000000003f7daa
- (id)init;	// IMP=0x00000000003f7d7e
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000003f7b70
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000003f7ab8
- (void)getBytes:(void *)arg1;	// IMP=0x00000000003f7a0a
- (_Bool)_isCompact;	// IMP=0x00000000003f7a02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f7972
- (_Bool)_copyWillRetain;	// IMP=0x00000000003f7941
- (const void *)bytes;	// IMP=0x00000000003f7930
- (unsigned long long)length;	// IMP=0x00000000003f791f

@end

