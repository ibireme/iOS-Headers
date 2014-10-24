//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSValue;

@interface RKSentenceClassifier : NSObject
{
    BOOL _sentenceIsTerminated;
    BOOL _sentenceIsAllSymbols;
    BOOL _sentenceHasQuestionTerminator;
    BOOL _sentenceHasAlternativeConjunction;
    NSString *_sentenceStringOriginal;
    NSString *_sentenceString;
    NSArray *_sentenceEntities;
    NSValue *_sentenceTag;
    NSArray *_inversions;
    NSArray *_interrogatives;
    NSArray *_choiceDelimiters;
    NSArray *_alternatives;
    NSArray *_appreciations;
}

+ (id)sentenceClassification:(id)arg1 withLanguageIdentifier:(id)arg2 options:(unsigned int)arg3;
+ (id)stringFromLexicalEntities:(id)arg1;
+ (id)lexicalEntitiesFromString:(id)arg1;
+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1 withLocale:(id)arg2;
+ (id)appreciationKeywordsForLanguage:(id)arg1;
+ (id)alternativeInversionsForLanguage:(id)arg1;
+ (id)polarTagRegularExpressionForLanguage:(id)arg1;
+ (id)polarTagKeywordsForLanguage:(id)arg1;
+ (id)sensitiveSubjectsForLanguage:(id)arg1;
+ (id)keywordMap;
+ (unsigned int)categoryForPreferenceKey:(id)arg1;
+ (id)preferenceKeyForCategory:(unsigned int)arg1;
+ (id)keyToCategoryMap;
+ (BOOL)canClassifyLanguageIdentifier:(id)arg1;
+ (Class)subclassForLocale:(id)arg1;
+ (Class)subclassForLanguageIdentifier:(id)arg1;
+ (id)languageIdentifierFromClassName;
@property(retain) NSArray *appreciations; // @synthesize appreciations=_appreciations;
@property(retain) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property(retain) NSArray *choiceDelimiters; // @synthesize choiceDelimiters=_choiceDelimiters;
@property(retain) NSArray *interrogatives; // @synthesize interrogatives=_interrogatives;
@property(retain) NSArray *inversions; // @synthesize inversions=_inversions;
@property(retain) NSValue *sentenceTag; // @synthesize sentenceTag=_sentenceTag;
@property BOOL sentenceHasAlternativeConjunction; // @synthesize sentenceHasAlternativeConjunction=_sentenceHasAlternativeConjunction;
@property BOOL sentenceHasQuestionTerminator; // @synthesize sentenceHasQuestionTerminator=_sentenceHasQuestionTerminator;
@property BOOL sentenceIsAllSymbols; // @synthesize sentenceIsAllSymbols=_sentenceIsAllSymbols;
@property BOOL sentenceIsTerminated; // @synthesize sentenceIsTerminated=_sentenceIsTerminated;
@property(retain) NSArray *sentenceEntities; // @synthesize sentenceEntities=_sentenceEntities;
@property(retain) NSString *sentenceString; // @synthesize sentenceString=_sentenceString;
@property(retain) NSString *sentenceStringOriginal; // @synthesize sentenceStringOriginal=_sentenceStringOriginal;
- (void).cxx_destruct;
- (id)classifySentence;
- (void)analyzeSentence;
- (id)addSentenceTerminatorQuestion:(id)arg1;
- (id)sentenceClassification:(id)arg1 options:(unsigned int)arg2;
- (id)languageIdentifier;
@property(readonly) NSString *alternativeConjunction;

@end
