#include "Permutator.cpp"

#include <gtest/gtest.h>
#pragma clang diagnostic push
#pragma GCC diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wextra"
#include <rapidcheck/gtest.h>
#pragma clang diagnostic pop
#pragma GCC diagnostic pop

// expected results generated by running the same tests on jsonld-java's Permutator class

TEST(PermutatorTest, singleChar) {
    std::vector<std::string> strings = {"a"};
    std::vector<std::vector<std::string>> results;

    Permutator p(strings);

    while(p.hasNext()) {
        std::vector<std::string> next = p.next();
        results.push_back(next);
    }

    EXPECT_EQ(results.size(), 1);
    std::vector<std::string> t = results[0];
    EXPECT_EQ(t[0], "a");
}

TEST(PermutatorTest, twoChars) {
    std::vector<std::string> strings = {"a", "b"};
    std::vector<std::vector<std::string>> results;

    Permutator p(strings);

    while(p.hasNext()) {
        std::vector<std::string> next = p.next();
        results.push_back(next);
    }

    EXPECT_EQ(results.size(), 2);
    std::vector<std::string> t = results[0];
    EXPECT_EQ(t[0], "a");
    EXPECT_EQ(t[1], "b");
    t = results[1];
    EXPECT_EQ(t[0], "b");
    EXPECT_EQ(t[1], "a");
}

TEST(PermutatorTest, threeChars) {
    std::vector<std::string> strings = {"a", "b", "c"};
    std::vector<std::vector<std::string>> results;

    Permutator p(strings);

    while(p.hasNext()) {
        std::vector<std::string> next = p.next();
        results.push_back(next);
    }

    EXPECT_EQ(results.size(), 6);
    std::vector<std::string> t = results[0];
    EXPECT_EQ(t[0], "a");
    EXPECT_EQ(t[1], "b");
    EXPECT_EQ(t[2], "c");
    t = results[1];
    EXPECT_EQ(t[0], "a");
    EXPECT_EQ(t[1], "c");
    EXPECT_EQ(t[2], "b");
    t = results[2];
    EXPECT_EQ(t[0], "c");
    EXPECT_EQ(t[1], "a");
    EXPECT_EQ(t[2], "b");
    t = results[3];
    EXPECT_EQ(t[0], "c");
    EXPECT_EQ(t[1], "b");
    EXPECT_EQ(t[2], "a");
    t = results[4];
    EXPECT_EQ(t[0], "b");
    EXPECT_EQ(t[1], "c");
    EXPECT_EQ(t[2], "a");
    t = results[5];
    EXPECT_EQ(t[0], "b");
    EXPECT_EQ(t[1], "a");
    EXPECT_EQ(t[2], "c");
}

TEST(PermutatorTest, threeStrings) {
    std::vector<std::string> strings = {"moe", "larry", "curly"};
    std::vector<std::vector<std::string>> results;

    Permutator p(strings);

    while(p.hasNext()) {
        std::vector<std::string> next = p.next();
        results.push_back(next);
    }

    EXPECT_EQ(results.size(), 6);
    std::vector<std::string> t = results[0];
    EXPECT_EQ(t[0], "curly");
    EXPECT_EQ(t[1], "larry");
    EXPECT_EQ(t[2], "moe");
    t = results[1];
    EXPECT_EQ(t[0], "curly");
    EXPECT_EQ(t[1], "moe");
    EXPECT_EQ(t[2], "larry");
    t = results[2];
    EXPECT_EQ(t[0], "moe");
    EXPECT_EQ(t[1], "curly");
    EXPECT_EQ(t[2], "larry");
    t = results[3];
    EXPECT_EQ(t[0], "moe");
    EXPECT_EQ(t[1], "larry");
    EXPECT_EQ(t[2], "curly");
    t = results[4];
    EXPECT_EQ(t[0], "larry");
    EXPECT_EQ(t[1], "moe");
    EXPECT_EQ(t[2], "curly");
    t = results[5];
    EXPECT_EQ(t[0], "larry");
    EXPECT_EQ(t[1], "curly");
    EXPECT_EQ(t[2], "moe");
}

