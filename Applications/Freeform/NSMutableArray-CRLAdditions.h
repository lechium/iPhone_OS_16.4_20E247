//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (CRLAdditions)
- (unsigned long long)crl_insertObject:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b870
- (void)crl_trimObjectsFromIndex:(unsigned long long)arg1;	// IMP=0x001000000005b832
- (void)crl_removeObjectsIdenticalToObjectsInArray:(id)arg1;	// IMP=0x001000000005b659
- (void)crl_addObjectsFromNonNilArray:(id)arg1;	// IMP=0x001000000005b640
- (void)crl_addNonNilObject:(id)arg1;	// IMP=0x001000000005b627
- (void)crl_addObjects:(id)arg1;	// IMP=0x001000000005b507
- (id)crl_peek;	// IMP=0x001000000005b4f5
- (id)crl_pop;	// IMP=0x001000000005b4b2
- (void)crl_push:(id)arg1;	// IMP=0x001000000005b4a0
- (id)crl_dequeue;	// IMP=0x001000000005b48e
- (void)crl_enqueue:(id)arg1;	// IMP=0x001000000005b47a
- (id)crlaxPopObject;	// IMP=0x001000000028678e
- (void)crlaxAddObjectsInReverseOrder:(id)arg1;	// IMP=0x0010000000286611
- (void)crlaxAddObjectsFromArrayIfNotNilWithAssert:(id)arg1;	// IMP=0x00100000002865aa
- (void)crlaxAddObjectsFromArrayIfNotNil:(id)arg1;	// IMP=0x001000000028655a
- (void)crlaxAddObjectIfNotNilWithAssert:(id)arg1;	// IMP=0x00100000002864f3
- (void)crlaxAddObjectIfNotNil:(id)arg1;	// IMP=0x00100000002864da
@end

