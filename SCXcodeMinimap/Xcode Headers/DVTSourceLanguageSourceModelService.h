/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol DVTSourceLanguageSourceModelService <NSObject>
- (struct _NSRange)rangeForBlockContainingRange:(struct _NSRange)arg1;
- (NSString *)stringForItem:(DVTSourceModelItem *)arg1;
- (DVTSourceModelItem *)commonSourceModelItemAtRange:(struct _NSRange)arg1;
- (DVTSourceModelItem *)sourceModelItemAtCharacterIndex:(unsigned long long)arg1;
- (DVTSourceModelItem *)sourceModelItemAtCharacterIndex:(unsigned long long)arg1 affinity:(unsigned long long)arg2;
- (DVTSourceModel *)sourceModelWithoutParsing;
- (DVTSourceModel *)sourceModel;
@end