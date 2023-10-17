//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface STRootStorage
{
    struct _RootStorage *m_pCRoot;	// 16 = 0x10
    NSMutableData *m_StorageData;	// 24 = 0x18
    void *m_pvBuf;	// 32 = 0x20
}

- (void *)resizeStorageBuffer:(unsigned long long)arg1;	// IMP=0x000000000037098b
- (void)dealloc;	// IMP=0x000000000037089c
- (id)initWithMutableData:(id)arg1 andMode:(int)arg2;	// IMP=0x000000000037070a
- (id)initWithName:(id)arg1 andMode:(int)arg2;	// IMP=0x00000000003705e1
- (void)setDefaultDocumentProperties;	// IMP=0x0000000000371233
- (void)setBlobDocumentPropertyWithId:(int)arg1 to:(void *)arg2 givenPropStream:(int)arg3;	// IMP=0x0000000000371213
- (void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2 givenPropStream:(int)arg3;	// IMP=0x00000000003711e6
- (void)setLongDocumentPropertyWithId:(int)arg1 to:(int)arg2 givenPropStream:(int)arg3;	// IMP=0x00000000003711b7
- (void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2 givenPropStream:(int)arg3;	// IMP=0x000000000037112f
- (void)setDocumentProperty:(int)arg1 withId:(int)arg2 AndType:(int)arg3 AndValue:(void *)arg4;	// IMP=0x0000000000371037
- (short)getShortDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2;	// IMP=0x0000000000370fbc
- (int)getLongDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2;	// IMP=0x0000000000370f44
- (id)getStringDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2;	// IMP=0x0000000000370c8c
- (id)getDocumentProperty:(int)arg1 withId:(int)arg2 PropType:(int *)arg3 throwOnError:(_Bool)arg4;	// IMP=0x00000000003709f8
- (id)getDocumentProperty:(int)arg1 withId:(int)arg2 PropType:(int *)arg3;	// IMP=0x00000000003709e0

@end
