//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface STConcreteFilesystemPrimitives : NSObject
{
}

- (void)enumerateRegularFilesInDirectoryAtURL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0040000000016c4b
- (_Bool)moveFileAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000016bb4
- (id)readDataFromFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016b93
- (id)fileSizeOfDataAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016a9d
- (_Bool)removeFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016a1c
- (_Bool)writeData:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000169fc
- (_Bool)createDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016973

@end
